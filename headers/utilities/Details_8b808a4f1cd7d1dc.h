#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 7 member(s).
namespace Platform {
class Details {
public:
    class Heap;
    class InProcModule;
    class __abi_CaptureBase;
    class __abi_CapturePtr;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@Details@Platform@@YAXXZ
    void Cleanup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationFactory@Details@Platform@@YAJPEAVModuleBase@1WRL@Microsoft@@PEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z
    long GetActivationFactory(WindissectOpaque *, HSTRING__*, IActivationFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Details@Platform@@YAHXZ
    int Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeData@Details@Platform@@YAJH@Z
    long InitializeData(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateModule@Details@Platform@@YA_NPEAVModuleBase@1WRL@Microsoft@@@Z
    bool TerminateModule(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeData@Details@Platform@@YAXH@Z
    void UninitializeData(int);
};
} // namespace Platform
