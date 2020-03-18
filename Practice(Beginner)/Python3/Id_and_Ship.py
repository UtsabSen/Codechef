# Source: https://www.codechef.com/problems/FLOW010

n = int(input())
d = {"b":"BattleShip","B":"BattleShip","c":"Cruiser","C":"Cruiser","d":"Destroyer","D":"Destroyer","f":"Frigate","F":"Frigate"}
for i in range(n):
    x = input()
    print(d[x])
