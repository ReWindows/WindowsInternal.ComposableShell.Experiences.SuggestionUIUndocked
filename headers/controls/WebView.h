#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 2 member(s).
namespace WindowsUdk::UI::Xaml::Controls {
class WebView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@WebView@Controls@Xaml@UI@WindowsUdk@@SAPE$AAV1234Windows@@W4WebViewExecutionMode@2346@W4WebViewCreationSettings@2345@@Z
    static ::Windows::UI::Xaml::Controls::WebView & * Create(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleAndShouldRender@WebView@Controls@Xaml@UI@WindowsUdk@@SAXPE$AAV1234Windows@@_N@Z
    static void SetVisibleAndShouldRender(::Windows::UI::Xaml::Controls::WebView & *, bool);
};
} // namespace WindowsUdk::UI::Xaml::Controls
