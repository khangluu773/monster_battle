#define MAX_ENTITIES 126
#define MAX_STRING 126

typedef struct {

    Vector2 pos;
    Texture2D texture;
    int id;

} entity_t;

typedef struct {

    char name[MAX_STRING];
    int hp;
    int max_hp;

    int id;
    int team;

} playerstate_t;

typedef struct {

    int in_combat;
    int round;

    playerstate_t player[MAX_ENTITIES];

} gamestate_t;
