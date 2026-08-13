echo '===== 回退 wsl.conf ====='
sudo cp /etc/wsl.conf.bak.<你运行时的日期> /etc/wsl.conf

echo '===== 恢复 resolv.conf 符号链接 ====='
sudo rm -f /etc/resolv.conf
sudo ln -s /mnt/wsl/resolv.conf /etc/resolv.conf

echo '===== 删除 resolved 配置 ====='
sudo rm -f /etc/systemd/resolved.conf.d/wsl-dns.conf
sudo systemctl restart systemd-resolved