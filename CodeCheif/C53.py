t = int(input())
while t:
    dragon_dsa, dragon_toc, dragon_dm = input().split()
    dragon_dsa = int(dragon_dsa)
    dragon_toc = int(dragon_toc)
    dragon_dm = int(dragon_dm)
    sloth_dsa, sloth_toc, sloth_dm = input().split()
    sloth_dsa = int(sloth_dsa)
    sloth_toc = int(sloth_toc)
    sloth_dm = int(sloth_dm)
    
    if dragon_dsa + dragon_dm + dragon_toc > sloth_dm + sloth_toc + sloth_dsa:
        print("Dragon")
    elif dragon_dsa + dragon_dm + dragon_toc < sloth_dm + sloth_toc + sloth_dsa:
        print("Sloth")
    elif dragon_dsa > sloth_dsa:
        print("Dragon")
    elif dragon_dsa < sloth_dsa:
        print("Sloth")
    elif dragon_toc > sloth_toc:
        print("Dragon")
    elif dragon_toc < sloth_toc:
        print("Sloth")
    else:
        print("Tie")
    
    t -= 1
