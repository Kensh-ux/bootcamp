第 1 步:诊断 PATH 问题 + 基础信息
echo '===== 当前 PATH ====='
echo "$PATH"
echo '===== uname 到底在不在 ====='
ls -la /usr/bin/uname /bin/uname 2>&1
/usr/bin/uname -a 2>&1
echo '===== CPU 架构 ====='
dpkg --print-architecture 2>&1
echo '===== 已安装软件包总数 ====='
echo -n 'dpkg -l 统计: '; dpkg -l | wc -l
echo -n 'apt list 统计: '; apt list --installed 2>/dev/null | wc -l

第 2 步:开发工具 / 现代 CLI 逐项检查
for pkg in build-essential gcc g++ make cmake git curl wget vim neovim tmux zsh fish python3 python3-pip python3-venv nodejs npm docker.io docker-compose-v2 podman ripgrep fd-find bat eza fzf zoxide git-delta lazygit gh net-tools htop; do
  st=$(dpkg-query -W -f='${Status}' "$pkg" 2>/dev/null)
  if echo "$st" | grep -q 'install ok installed'; then
    ver=$(dpkg-query -W -f='${Version}' "$pkg" 2>/dev/null)
    printf '[已安装] %-20s %s\n' "$pkg" "$ver"
  else
    printf '[缺  失] %s\n' "$pkg"
  fi
done

第 3 步:编程语言环境
for c in python3 python gcc g++ clang rustc cargo go java javac ruby perl php node npm; do
  if command -v "$c" >/dev/null 2>&1; then
    printf '[已安装] %-9s 位置: %s\n' "$c" "$(command -v "$c")"
  else
    printf '[缺  失] %s\n' "$c"
  fi
done