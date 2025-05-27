if ! git rev-parse --git-dir > /dev/null 2>&1; then
  echo "Este diretório não é um repositório Git."
  exit 1
fi

git log -n 5 --pretty=format:"%H"
