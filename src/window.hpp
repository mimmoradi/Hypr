#pragma once

#include "defines.hpp"
#include "utilities/Workspace.hpp"

class CWindow {
public:
    CWindow();
    ~CWindow();

    void        move(Vector2D dest);
    void        moveByDelta(Vector2D delta);

    void        resize(Vector2D size);
    void        resize(float percx, float percy);

    // ------------------------------------- //
    //              Node Stuff               //
    // ------------------------------------- //

    // IDs:
    // > 0 : Windows
    // == 0 : None
    // < 0 : Nodes

    EXPOSED_MEMBER(ParentNodeID, int64_t, i);

    EXPOSED_MEMBER(ChildNodeAID, int64_t, i);
    EXPOSED_MEMBER(ChildNodeBID, int64_t, i);

    void        generateNodeID();

    // ------------------------------------- //

    std::string getName();

    // Tells the window manager to reload the window's params
    EXPOSED_MEMBER(Dirty, bool, b);

    void        setDirtyRecursive(bool);
    void        recalcSizePosRecursive();

    EXPOSED_MEMBER(Size, Vector2D, vec);
    EXPOSED_MEMBER(EffectiveSize, Vector2D, vec);
    EXPOSED_MEMBER(EffectivePosition, Vector2D, vec);
    EXPOSED_MEMBER(Position, Vector2D, vec);
    EXPOSED_MEMBER(RealSize, Vector2D, vec);
    EXPOSED_MEMBER(RealPosition, Vector2D, vec);
    EXPOSED_MEMBER(IsFloating, bool, b);
    EXPOSED_MEMBER(Drawable, int64_t, i);  // int64_t because it's my internal ID system too.

    // Fullscreen
    EXPOSED_MEMBER(Fullscreen, bool, b);

    // Workspace pointer
    EXPOSED_MEMBER(WorkspaceID, int, i);

    // For floating
    EXPOSED_MEMBER(DefaultSize, Vector2D, vec);
    EXPOSED_MEMBER(DefaultPosition, Vector2D, vec);

    // Monitors
    EXPOSED_MEMBER(Monitor, int, i);
    

private:

};