#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 5 member(s).
namespace Windows::System {
class Launcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriAsync@Launcher@System@Windows@@SAPE$AAU?$IAsyncOperation@_N@Foundation@3@PE$AAVUri@53@@Z
    static WindissectOpaque & * LaunchUriAsync(::Windows::Foundation::Uri & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriAsync@Launcher@System@Windows@@SAPE$AAU?$IAsyncOperation@_N@Foundation@3@PE$AAVUri@53@PE$AAVLauncherOptions@23@@Z
    static WindissectOpaque & * LaunchUriAsync(::Windows::Foundation::Uri & *, ::Windows::System::LauncherOptions & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriAsync@Launcher@System@Windows@@SAPE$AAU?$IAsyncOperation@_N@Foundation@3@PE$AAVUri@53@PE$AAVLauncherOptions@23@PE$AAVValueSet@Collections@53@@Z
    static WindissectOpaque & * LaunchUriAsync(::Windows::Foundation::Uri & *, ::Windows::System::LauncherOptions & *, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAppUriSupportAsync@Launcher@System@Windows@@SAPE$AAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@Foundation@3@PE$AAVUri@53@PE$AAVString@Platform@@@Z
    static WindissectOpaque & * QueryAppUriSupportAsync(::Windows::Foundation::Uri & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryUriSupportAsync@Launcher@System@Windows@@SAPE$AAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@Foundation@3@PE$AAVUri@53@W4LaunchQuerySupportType@23@PE$AAVString@Platform@@@Z
    static WindissectOpaque & * QueryUriSupportAsync(::Windows::Foundation::Uri & *, int, ::Platform::String & *);
};
} // namespace Windows::System
