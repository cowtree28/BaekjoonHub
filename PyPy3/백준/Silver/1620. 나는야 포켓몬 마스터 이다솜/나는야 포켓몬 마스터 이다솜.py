n,m = map(int,input().split())
pokemon_name_dict = {}
pokemon_num_dict = {}
for i in range(n):
    name = input()
    pokemon_name_dict[name] = i+1
    pokemon_num_dict[i+1] = name
for i in range(m):
    pokemon = input()
    if pokemon.isdigit():
        print(pokemon_num_dict[int(pokemon)])
    else:
        print(pokemon_name_dict[pokemon])
