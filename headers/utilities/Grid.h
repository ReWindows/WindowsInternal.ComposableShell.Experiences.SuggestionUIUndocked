#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace Windows::UI::Xaml::Controls {
class Grid {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumn@Grid@Controls@Xaml@UI@Windows@@SAXPE$AAVFrameworkElement@345@H@Z
    static void SetColumn(::Windows::UI::Xaml::FrameworkElement & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumnSpan@Grid@Controls@Xaml@UI@Windows@@SAXPE$AAVFrameworkElement@345@H@Z
    static void SetColumnSpan(::Windows::UI::Xaml::FrameworkElement & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRow@Grid@Controls@Xaml@UI@Windows@@SAXPE$AAVFrameworkElement@345@H@Z
    static void SetRow(::Windows::UI::Xaml::FrameworkElement & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRowSpan@Grid@Controls@Xaml@UI@Windows@@SAXPE$AAVFrameworkElement@345@H@Z
    static void SetRowSpan(::Windows::UI::Xaml::FrameworkElement & *, int);
};
} // namespace Windows::UI::Xaml::Controls
