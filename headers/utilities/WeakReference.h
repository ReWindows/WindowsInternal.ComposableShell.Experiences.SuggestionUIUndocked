#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace Platform {
class WeakReference {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WeakReference@Platform@@QEAA@XZ
    ~WeakReference();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalAddRef@WeakReference@Platform@@AEAAXXZ
    void InternalAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRelease@WeakReference@Platform@@AEAAXXZ
    void InternalRelease();
};
} // namespace Platform
