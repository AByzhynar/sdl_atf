
extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

namespace lua_lib {
struct SDLRemoteTestAdapterLuaWrapper {
    static int create_SDLRemoteTestAdapter(lua_State *L);
    static int destroy_SDLRemoteTestAdapter(lua_State *L);
    static void registerSDLRemoteTestAdapter(lua_State *L);
    static class SDLRemoteTestAdapterClient* get_instance(lua_State* L);

    static int lua_set_data(lua_State *L);
    static int lua_get_data(lua_State *L);
    static int lua_connected(lua_State *L);
    static int lua_open(lua_State *L);
    static int lua_send(lua_State *L);
    static int lua_receive(lua_State *L);
    static int lua_clear(lua_State *L);

};

}
