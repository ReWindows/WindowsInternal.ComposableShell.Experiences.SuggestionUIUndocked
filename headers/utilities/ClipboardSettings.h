#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 1 member(s).
namespace WindowsUdk::ApplicationModel::DataTransfer {
class ClipboardSettings {
public:
    class Current;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@ClipboardSettings@DataTransfer@ApplicationModel@WindowsUdk@@SAPE$AAV1234@PE$AAVUser@System@Windows@@@Z
    static ::WindowsUdk::ApplicationModel::DataTransfer::ClipboardSettings & * GetForUser(::Windows::System::User & *);
};
} // namespace WindowsUdk::ApplicationModel::DataTransfer
