#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 7 member(s).
namespace winrt::Windows::Security::Authentication::Web::Core {
class WebAuthenticationCoreManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAccountAsync@WebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@winrt@@SA@AEBUWebAccountProvider@Credentials@567@AEBUhstring@param@7@@Z
    static FindAccountAsync(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllAccountsAsync@WebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@winrt@@SA@AEBUWebAccountProvider@Credentials@567@@Z
    static FindAllAccountsAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllAccountsAsync@WebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@winrt@@SA@AEBUWebAccountProvider@Credentials@567@AEBUhstring@param@7@@Z
    static FindAllAccountsAsync(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenSilentlyAsync@WebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@winrt@@SA@AEBUWebTokenRequest@234567@@Z
    static GetTokenSilentlyAsync(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenSilentlyAsync@WebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@winrt@@SA@AEBUWebTokenRequest@234567@AEBUWebAccount@Credentials@567@@Z
    static GetTokenSilentlyAsync(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTokenAsync@WebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@winrt@@SA@AEBUWebTokenRequest@234567@@Z
    static RequestTokenAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTokenAsync@WebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@winrt@@SA@AEBUWebTokenRequest@234567@AEBUWebAccount@Credentials@567@@Z
    static RequestTokenAsync(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::Security::Authentication::Web::Core
