#include "renderer.h"

ref_entity_t entites[MAX_REFS];

void add_ref(entity_t *ent) {

    ref_entity_t *ref = &entities[0];
    ref->texture = ent->texture;
    ref->position = ent->pos;
    ref->size = (Vector2)(ent->texture.width, ent->texture.height);
    ref->rotation = 0;
    ref->tint = BLACK;

}

void render_frame() {

    BeginDrawing();
    ClearBackground(WHITE);

    for (int i = 0; i < num_entities; i++) {

        ref_entity_t *ref = &ref_entities[i];
        DrawTexturePro(ref->texture, (Rectangle)(0, 0, ref->size.x, ref->size.y), 
        (Rectangle)(ref->position.x, ref->position.y, ref->size.x, ref->size.y), 
        (Vector2)(ref->size.x / 2, ref->size.y / 2), ref->rotation, ref-> tint);

        EndDrawing();

    }

}