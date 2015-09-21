echo "Compiling source codes..."
g++ -std=c++11 ./stage1/hint.cpp -o ./stage1/hint
g++ -std=c++11 ./stage2/hint.cpp -o ./stage2/hint
g++ -std=c++11 ./stage2/EliseHome/talk_with_Elise.cpp -o ./stage2/EliseHome/talk_with_Elise
g++ -std=c++11 ./stage2/JuiceShop/talk_with_shopkeeper.cpp -o ./stage2/JuiceShop/talk_with_shopkeeper
g++ -std=c++11 ./stage3/hint.cpp -o ./stage3/hint
g++ -std=c++11 ./stage3/start_testing.cpp -o ./stage3/start_testing
g++ -std=c++11 ./stage4/hint.cpp -o ./stage4/hint
g++ -std=c++11 ./stage5/hint.cpp -o ./stage5/hint
g++ -std=c++11 ./stage5/machine.cpp -o ./stage5/machine
echo "Removing source codes..."
rm README.md -rf
rm flags.txt -rf
rm ./stage1/*.cpp -rf
rm ./stage2/*.cpp -rf
rm ./stage2/EliseHome/*.cpp -rf
rm ./stage2/JuiceShop/*.cpp -rf
rm ./stage3/*.cpp -rf
rm ./stage4/*.cpp -rf
rm ./stage5/*.cpp -rf
echo "Completed!"

