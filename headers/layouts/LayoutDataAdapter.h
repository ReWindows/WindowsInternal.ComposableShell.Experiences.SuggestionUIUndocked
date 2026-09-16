#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 7 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class LayoutDataAdapter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsOfType@LayoutDataAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEBAPE$AAVString@Platform@@PE$AAV67@W4ExpressiveTextDataItemType@2345@@Z
    ::Platform::String & * GetItemsOfType(::Platform::String & *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItemFromMfu@LayoutDataAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEBAXPE$AAVString@Platform@@W4ExpressiveTextDataItemType@2345@@Z
    void RemoveItemFromMfu(::Platform::String & *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItemOfType@LayoutDataAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEBAXPE$AAVString@Platform@@W4ExpressiveTextDataItemType@2345@@Z
    void SelectItemOfType(::Platform::String & *, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCategorySet@LayoutDataAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPE$AAUIKeyboardCategorySet@LayoutData@Common@TextInput@345@W4ExpressiveTextDataItemType@2345@@Z
    void SetCategorySet(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::LayoutData::IKeyboardCategorySet & *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutDataAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~LayoutDataAdapter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategorySetForType@LayoutDataAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@AEBAPE$AAUIKeyboardCategorySet@LayoutData@Common@TextInput@345@W4ExpressiveTextDataItemType@2345@@Z
    ::WindowsInternal::ComposableShell::Experiences::TextInput::Common::LayoutData::IKeyboardCategorySet & * GetCategorySetForType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveInMemoryMfu@LayoutDataAdapter@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@AEBAXPE$AAUIKeyboardCategorySet@LayoutData@Common@TextInput@345@0@Z
    void SaveInMemoryMfu(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::LayoutData::IKeyboardCategorySet & *, ::WindowsInternal::ComposableShell::Experiences::TextInput::Common::LayoutData::IKeyboardCategorySet & *) const;
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked
