#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 1 member(s).
namespace Windows::Networking::Connectivity {
class NetworkInformation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@@SAPE$AAVConnectionProfile@234@XZ
    static ::Windows::Networking::Connectivity::ConnectionProfile & * GetInternetConnectionProfile();
};
} // namespace Windows::Networking::Connectivity
