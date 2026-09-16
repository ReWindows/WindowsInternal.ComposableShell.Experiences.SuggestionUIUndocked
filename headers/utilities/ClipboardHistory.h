#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 2 member(s).
namespace WindowsUdk::ApplicationModel::DataTransfer {
class ClipboardHistory {
public:
    class Current;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@ClipboardHistory@DataTransfer@ApplicationModel@WindowsUdk@@SAPE$AAV1234@PE$AAVUser@System@Windows@@@Z
    static ::WindowsUdk::ApplicationModel::DataTransfer::ClipboardHistory & * GetForUser(::Windows::System::User & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@ClipboardHistory@DataTransfer@ApplicationModel@WindowsUdk@@SA_NXZ
    static bool IsSupported();
};
} // namespace WindowsUdk::ApplicationModel::DataTransfer
