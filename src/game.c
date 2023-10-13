#include <stdio.h>
#include "common.h"
#include "ui.h"
#include "game.h"

gamestate_t gs;
entity_t entities[MAX_ENTITIES];

void init_game( {

    gs.in_combat = 0;
    gs.round = 0;

    gs.player[0].id = 0;
    gs.player[0].team = 0;
    gs.player[0].hp = 10;
    gs.player[0].max_hp = 10;
    strcpy(gs.player[0].name, "Player 1");

    entities[0].id = 0;
    entities[0].pos.x = 100;
    entities[0].pos.y = 100;
    entities[0].texture = LoadTexture("~/dev/monster_battle/assets/1 - k340MjQ.png");
    printf("[DEBUG] Texture = %d", entities[0].texture.id);
    printf("[DEBUG] Loaded the texture and player.\n");

    add_ref(&entities[0]);

})