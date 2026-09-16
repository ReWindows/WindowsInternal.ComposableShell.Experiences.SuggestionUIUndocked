#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 12 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class ClipboardAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipboardHistoryIdToUdkId@ClipboardAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SA?AVGuid@Platform@@PE$AAVString@7@@Z
    static ::Platform::Guid ClipboardHistoryIdToUdkId(::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipboardPreviewDataAsync@ClipboardAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAPE$AAU?$IAsyncOperation@PE$AAVString@Platform@@@Foundation@Windows@@I@Z
    WindissectOpaque & * GetClipboardPreviewDataAsync(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHistorySupported@ClipboardAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA_NXZ
    bool IsHistorySupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TruncateClipboardText@ClipboardAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@SA?AUhstring@winrt@@AEBU67@I_N@Z
    static WindissectOpaque TruncateClipboardText(WindissectOpaque const &, unsigned int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClipboardAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@UEAA@XZ
    virtual ~ClipboardAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClipboardItemPreviewDataJson@ClipboardAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@AEAA?AUhstring@winrt@@AEBU67@_N@Z
    WindissectOpaque CreateClipboardItemPreviewDataJson(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextInputUserAsync@ClipboardAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@AEAAPE$AAU?$IAsyncOperation@PE$AAVUser@System@Windows@@@Foundation@Windows@@XZ
    WindissectOpaque & * GetTextInputUserAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ClipboardAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@AEAAXXZ
    void Initialize();
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked
