ViridianCaves_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
	.byte 0

ViridianCaves_2F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_RESERVE
	end
