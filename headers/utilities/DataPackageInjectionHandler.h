#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 3 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class DataPackageInjectionHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDropAsync@DataPackageInjectionHandler@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@PE$AAUIDataPackageProxy_1@2345@W4DragDropSimulatorDropPoint@2345@@Z
    WindissectOpaque & * DoDropAsync(WindissectOpaque& *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToClipboard@DataPackageInjectionHandler@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPE$AAUIDataPackageProxy_1@2345@@Z
    void SetToClipboard(WindissectOpaque& *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataPackageInjectionHandler@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~DataPackageInjectionHandler();
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked
