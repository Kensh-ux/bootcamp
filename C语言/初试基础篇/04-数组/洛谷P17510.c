#include <stdio.h>
int a[1005][1005];
int H, W;

int is_valid(int x, int y) {
    return x >= 0 && x < H && y >= 0 && y < W;
}

int main()
{
    scanf("%d %d",&H,&W);
    
    for (int i=0; i<H; i++)
    {
        for (int j=0; j<W; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    long long base_score = 0;
    for (int i=0; i<H; i++)
    {
        for (int j=0; j<W; j++)
        {
            if (j + 1 < W && a[i][j] == a[i][j+1]) base_score++;
            if (i + 1 < H && a[i][j] == a[i+1][j]) base_score++;
        }
    }
    
    long long max_delta = 0;
    
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    
    for (int i=0; i<H; i++)
    {
        for (int j=0; j<W; j++)
        {
            int old_color = a[i][j];
            
            for (int new_color = 1; new_color <= 3; new_color++)
            {
                if (new_color == old_color) continue;
                
                int delta = 0;
                
                for (int d=0; d<4; d++)
                {
                    int nx = i + dx[d];
                    int ny = j + dy[d];

                    if (is_valid(nx, ny))
                    {
                        if (a[nx][ny] == old_color) delta--; 
                        if (a[nx][ny] == new_color) delta++;
                    }
                }
                
                if (delta > max_delta)
                {
                    max_delta = delta;
                }
            }
        }
    }
    
    printf("%lld\n", base_score + max_delta);
    
    return 0;
}