if [ ! -d "/tmp2/`whoami`" ]; then
    mkdir /tmp2/`whoami`
fi
cp -r ../TerminalGame /tmp2/`whoami`
cd /tmp2/`whoami`/TerminalGame
./setup.sh
rm $0
