/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_TROOPPAGECONDITION_H
#define LCF_RPG_TROOPPAGECONDITION_H

/**
 * RPG::TroopPageCondition class.
 */
namespace RPG {
	class TroopPageCondition {
	public:
		struct Flags {
			bool switch_a;
			bool switch_b;
			bool variable;
			bool turn;
			bool fatigue;
			bool enemy_hp;
			bool actor_hp;
			bool turn_enemy;
			bool turn_actor;
			bool command_actor;
		} flags;
		int switch_a_id = 1;
		int switch_b_id = 1;
		int variable_id = 1;
		int variable_value = 0;
		int turn_a = 0;
		int turn_b = 0;
		int fatigue_min = 0;
		int fatigue_max = 100;
		int enemy_id = 0;
		int enemy_hp_min = 0;
		int enemy_hp_max = 100;
		int actor_id = 1;
		int actor_hp_min = 0;
		int actor_hp_max = 100;
		int turn_enemy_id = 0;
		int turn_enemy_a = 0;
		int turn_enemy_b = 0;
		int turn_actor_id = 1;
		int turn_actor_a = 0;
		int turn_actor_b = 0;
		int command_actor_id = 1;
		int command_id = 1;
	};
}

#endif
