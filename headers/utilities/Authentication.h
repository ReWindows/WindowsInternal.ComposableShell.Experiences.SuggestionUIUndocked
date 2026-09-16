#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 10 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class Authentication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AuthenticateAsync@Authentication@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@UEAAPE$AAU?$IAsyncOperation@PE$AAVString@Platform@@@Foundation@Windows@@PE$AAVString@Platform@@00000W4AuthenticationRequestType@2345@0@Z
    virtual WindissectOpaque & * AuthenticateAsync(::Platform::String & *, ::Platform::String & *, ::Platform::String & *, ::Platform::String & *, ::Platform::String & *, ::Platform::String & *, int, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthenticationAccountsAsync@Authentication@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@UEBAPE$AAU?$IAsyncOperation@PE$AAVString@Platform@@@Foundation@Windows@@PE$AAVString@Platform@@000@Z
    virtual WindissectOpaque & * GetAuthenticationAccountsAsync(::Platform::String & *, ::Platform::String & *, ::Platform::String & *, ::Platform::String & *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthenticationProviderAsync@Authentication@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@UEBAPE$AAU?$IAsyncOperation@PE$AAVString@Platform@@@Foundation@Windows@@PE$AAVString@Platform@@0@Z
    virtual WindissectOpaque & * GetAuthenticationProviderAsync(::Platform::String & *, ::Platform::String & *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllWebAccountsStatusToAuthenticationStatus@Authentication@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CA?AW4AuthenticationStatus@2345@W4FindAllWebAccountsStatus@Core@Web@1Security@Windows@winrt@@@Z
    static int FindAllWebAccountsStatusToAuthenticationStatus(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebAccountProvider@Authentication@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CA?AU?$IAsyncOperation@UWebAccountProvider@Credentials@Security@Windows@winrt@@@Foundation@Windows@winrt@@AEBUhstring@9@0@Z
    static WindissectOpaque GetWebAccountProvider(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadForceAuthUIDebugSettingValue@Authentication@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CA?AW4ForceAuthUIDebugSettingValue@12345@XZ
    static int ReadForceAuthUIDebugSettingValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebAccountToJson@Authentication@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CA?AUJsonObject@Json@Data@Windows@winrt@@UWebAccount@Credentials@Security@9winrt@@@Z
    static WindissectOpaque WebAccountToJson(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebProviderErrorToErrorJson@Authentication@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CA?AUJsonObject@Json@Data@Windows@winrt@@UWebProviderError@Core@Web@1Security@9winrt@@@Z
    static WindissectOpaque WebProviderErrorToErrorJson(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebTokenRequestStatusToAuthenticationStatus@Authentication@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CA?AW4AuthenticationStatus@2345@W4WebTokenRequestStatus@Core@Web@1Security@Windows@winrt@@@Z
    static int WebTokenRequestStatusToAuthenticationStatus(int);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked
