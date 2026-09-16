#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 2 member(s).
namespace winrt::Windows::ApplicationModel::DataTransfer {
class Clipboard {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentChanged@Clipboard@DataTransfer@ApplicationModel@Windows@winrt@@SA@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@45@@Z
    static ContentChanged(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContent@Clipboard@DataTransfer@ApplicationModel@Windows@winrt@@SA@XZ
    static GetContent();
};
} // namespace winrt::Windows::ApplicationModel::DataTransfer
