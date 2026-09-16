#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 3 member(s).
namespace Windows::UI::Xaml::Automation {
class AutomationProperties {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlledPeers@AutomationProperties@Automation@Xaml@UI@Windows@@SAPE$AAU?$IVector@PE$AAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@5@PE$AAVDependencyObject@345@@Z
    static WindissectOpaque & * GetControlledPeers(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationId@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@PE$AAVString@Platform@@@Z
    static void SetAutomationId(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@PE$AAVString@Platform@@@Z
    static void SetName(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
};
} // namespace Windows::UI::Xaml::Automation
