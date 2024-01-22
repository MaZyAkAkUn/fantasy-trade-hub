FTH - Fantasy Trade HUB. Simulation framework made to simulate, test, and develop economic in your fantasy games.
Dwarwes, Elves, Humans and other, need access to free Market to trade diferent magical or not resources and items. 
Free Market For All!
In future releases this framework allow u to constract base economic engine for Youre game in Unreal Engine, Unity, Godot game`s engines.
So called midllewares, or adapters will be made for general game engines. So u can easly generae enconomic engine for ur game.
Wit realistic markets members behavior, needs and prices.
Any contributions welcome.
Dev Notes:
 1.(22.01.2024) Level of abstraction - on which level we will simulate economy? I have at least two of tham: individuals based and Buildings/Places based
 - First one will simulate interaction between diferent individuals like miners, woodcutters, blacksmithes, traders, citizens and so on. Thay will have some needs, will buy some items/resources
 - Second, based on building/resource deposits. Like ore comes from mines, than to forge, smelts into metal which will be used in forge to produce items
  which will be used in military buildings, and so on
  Hm as writing it understang that second variant is not good enought, so maybe later we can combine tham together and add buildings, and resource deposits into simulation too
  
But for first lets start from first metho, and asume that individuals prodeces goods by tham self.
Starting with this individuals:
- Miners - produce ore and coal, needs tools, food, and Gears/clothes
- Woodcutters - produce raw wood, need tools, food and Gears/clothes
- Smelters - produce metals, needs in coal, food, ore, clothes, tools
- Blacksmithes - produce metal items/tools, needs in metal, coal/fuel, food, clothes, tools
- Farmers - produce food, linen, cotton, wool, needs in tools, clothes, maybe seeds and fertilizers(Animal manure, with it we can implement farming productivity levels)
- Tailors(abstration for all clothes production) - produce clothes, consume food, raw cotton,linen, wool.
- Carpenters(abstract for all wood works) - consume wood,  food, tools, produce wooden tools, wooden weapons.
- Citizens - (abstract for diferent individuals, which dont have production skills.Military, gov, nobbles, and so on.), consume food, and all kind of ready items
like weapon, tools, decor, and so on, their need depends on later-added characters profile, with interests, needs, and so on(like need in safety, food, house, luxury stuf)
Later we will add a more consumers and produces, but for start it is enought im think.
