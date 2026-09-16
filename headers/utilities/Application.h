#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 1 member(s).
namespace Windows::UI::Xaml {
class Application {
public:
    class Current;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadComponent@Application@Xaml@UI@Windows@@SAXPE$AAVObject@Platform@@PE$AAVUri@Foundation@4@W4ComponentResourceLocation@Primitives@Controls@234@@Z
    static void LoadComponent(::Platform::Object & *, ::Windows::Foundation::Uri & *, int);
};
} // namespace Windows::UI::Xaml
