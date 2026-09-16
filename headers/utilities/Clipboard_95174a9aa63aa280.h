#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 1 member(s).
namespace Windows::ApplicationModel::DataTransfer {
class Clipboard {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentWithOptions@Clipboard@DataTransfer@ApplicationModel@Windows@@SA_NPE$AAVDataPackage@234@PE$AAVClipboardContentOptions@234@@Z
    static bool SetContentWithOptions(::Windows::ApplicationModel::DataTransfer::DataPackage & *, ::Windows::ApplicationModel::DataTransfer::ClipboardContentOptions & *);
};
} // namespace Windows::ApplicationModel::DataTransfer
