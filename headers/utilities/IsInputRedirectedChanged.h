#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 2 member(s).
namespace Windows::Gaming::UI::GameBar {
class IsInputRedirectedChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add@IsInputRedirectedChanged@GameBar@UI@Gaming@Windows@@SA?AVEventRegistrationToken@Foundation@5@PE$AAV?$EventHandler@PE$AAVObject@Platform@@@75@@Z
    static ::Windows::Foundation::EventRegistrationToken add(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove@IsInputRedirectedChanged@GameBar@UI@Gaming@Windows@@SAXVEventRegistrationToken@Foundation@5@@Z
    static void remove(::Windows::Foundation::EventRegistrationToken);
};
} // namespace Windows::Gaming::UI::GameBar
