
# Main Changes

The goal of this hack is to greatly increase the replay value of FireRed. I always find that after playing a mainline version (or hack) a few times, I tend to end up with similar parties on replay. I liked the novelty that randomizers added to games, but they only produce static mappings (once you figured it out the changes applied to a given Pokemon, the novelty started to fade). This hack introduces what effectively functions as a dynamic randomizer, with some applied constraints - to give the player enough information that they aren't completely disoriented the entire playthrough. The randomizer applies the following:

1. One of the two types of a given Pokemon is randomly rolled at the point of capture
	- This type persists through evolution (and stays in the same type slot, so you can predict final evolutions).
	- The secondary type is twice as likely to be modified.
	- A limited number of Pokemon have had their primary and secondary types swapped (namely normal/flying types).
		- *For example: Pidgeys are now more likely to be flying/X typed rather than normal/X typed.*
	- It is possible for the type to remain unchanged if the type rolled is the same as the type replaced.
	- Monotyping is preserved if the primary type is modified on a monotype pokemon, however the pokemon will become dual-typed if the secondary type is modified.
	- A dual-type can only become a mono-type of one of its two original types (when the modified type matches the unmodified type).
	
2. Base stat modifiers are rolled at the point of capture
	
	- These modifiers can range from -15% to +30% on all base stats except HP (unsure if I will include this eventually).
	- Modifiers are displayed from the Pokemon's summary menu, so you know immediately whether you caught a quality Pokemon.
	- There's no guaranteed average modifier, however centering the random range between -15% and +30% centers the average around +7.5% so you're more likely to find an improved Pokemon overall.

3. Movesets are dynamically supplemented based on the gained type of the given Pokemon
	
	- Pokemon will retain their original species based moveset, while also learning moves from the type-specific dynamic moveset - this way they get access to useful STAB moves that make use of their gained type
	- Moves from the dynamic learnset will take into consideration the characteristics of the Pokemon to decide which move to grant (this feature is pretty complex, so I'm going to break it down further):
		- The attack-style of the Pokemon is checked during move learning (either Physical/Mixed/Special) and moves that favor the pokemon's best stat will be favored in their dynamic movepool.
		- The body type of the Pokemon is also considered. For example, Pokemon without hands will not learn punching moves.
	- Pokemon that have not gained a new type will get access to a special movepool, so they can maintain parity with their modified counterparts

4. Abilities
	
	- Pokemon will have a possible 3rd ability that can be learned and abilities are even distributed across natures and gained types  
	- Abilities will be generally more diverse for each species, however I have not decided yet whether I want the 3rd ability to be dynamic or static for each species

# Mechanic Changes (Deviations from vanilla FireRed)

Confirmed:
* Implemented Physical/Special Split and made it visible from the move menu
* Added almost all of the Gen 4 moves - as the Gen 4 movepool solves some holes from special/physical split
* Added the Gen 4 Sandstorm spDef boost to Rock types mechanic
* Added a Def boost for Ice types in hail (to give it parity to sandstorm)

Planned:
* Some Gen 4 abilities will be added

# Gameplay Changes
The game story will be tweaked such that Prof Oak is the antagonist and both Red and Blue are encounterable rivals throughout the game. The cause of the high-variability in Pokemon will be integrated into a modified Kanto campaign to increase the immersion!
