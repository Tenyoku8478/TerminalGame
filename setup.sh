echo "Compiling source codes..."
g++ ./stage1/gen.cpp -o ./stage1/gen
./stage1/gen >../book.txt
ln -s /tmp2/`whoami`/book.txt ./stage1/book.txt

g++ -std=c++11 ./stage2/EliseHome/talk_with_Elise.cpp -o ./stage2/EliseHome/talk_with_Elise
g++ -std=c++11 ./stage2/JuiceShop/talk_with_shopkeeper.cpp -o ./stage2/JuiceShop/talk_with_shopkeeper

g++ -std=c++11 ./stage3/start_testing.cpp -o ./stage3/start_testing

g++ -std=c++11 ./stage5/machine.cpp -o ./stage5/machine

./stage6/gen.py >./stage6/flag_and_frog.txt

mv ./stage7/_git ./stage7/.git

g++ ./stage9/friend.cpp -o ./stage9/friend
echo "Removing source codes..."
rm README.md -rf
rm flags.txt -rf
rm ./stage1/*.cpp -rf
rm ./stage1/gen
rm ./stage2/*.cpp -rf
rm ./stage2/EliseHome/*.cpp -rf
rm ./stage2/JuiceShop/*.cpp -rf
rm ./stage3/*.cpp -rf
rm ./stage4/*.cpp -rf
rm ./stage5/*.cpp -rf
rm ./stage6/*.py -rf
rm ./stage9/*.cpp -rf
echo "Completed!"
rm $0
