echo "Compiling source codes..."
g++ -std=c++11 ./stage1/getFlag.cpp -o ./stage1/getFlag
g++ -std=c++11 ./stage1/bin/executable.cpp -o ./stage1/bin/executable

g++ -std=c++11 ./stage2/EliseHome/talk_with_Elise.cpp -o ./stage2/EliseHome/talk_with_Elise
g++ -std=c++11 ./stage2/JuiceShop/talk_with_shopkeeper.cpp -o ./stage2/JuiceShop/talk_with_shopkeeper

g++ -std=c++11 ./stage3/getFlag.cpp -o ./stage3/getFlag
g++ -std=c++11 ./stage4/amy.cpp -o ./stage4/amy

g++ -std=c++11 ./stage5/machine.cpp -o ./stage5/machine

./stage6/gen.py >./stage6/flag_and_frog.txt

g++ -std=c++11 ./stage7/getFlag.cpp -o ./stage7/getFlag

g++ ./stage9/friend.cpp -o ./stage9/friend
echo "Removing source codes..."
rm README.md -rf
rm flags.txt -rf
rm ./stage1/*.cpp -rf
rm ./stage1/bin/*.cpp -rf
rm ./stage2/*.cpp -rf
rm ./stage2/EliseHome/*.cpp -rf
rm ./stage2/JuiceShop/*.cpp -rf
rm ./stage3/*.cpp -rf
rm ./stage4/*.cpp -rf
rm ./stage4/biggerNum.sh -rf
rm ./stage5/*.cpp -rf
rm ./stage6/*.py -rf
rm ./stage7/*.cpp -rf
rm ./stage9/*.cpp -rf
echo "Completed!"
rm $0
