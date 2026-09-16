#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked {
class NativeBridge {
public:
    class FocusedEditControlInfoCache;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppPackageFullNameNoException@NativeBridge@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CAPE$AAVString@Platform@@PE$AAVTextInputSessionTargetInfo@Text@Input@UI@WindowsUdk@@@Z
    static ::Platform::String & * GetAppPackageFullNameNoException(::WindowsUdk::UI::Input::Text::TextInputSessionTargetInfo & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeAsJson@NativeBridge@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CAPE$AAVJsonObject@Json@Data@Windows@@AEBVSize@Foundation@9@@Z
    static ::Windows::Data::Json::JsonObject & * GetSizeAsJson(::Windows::Foundation::Size const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebUIViewFromShellViewShowRequestInfo@NativeBridge@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CAPE$AAVString@Platform@@PE$AAVShellViewShowRequestInfo@Common@TextInput@345@@Z
    static ::Platform::String & * GetWebUIViewFromShellViewShowRequestInfo(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::ShellViewShowRequestInfo & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReplaceSuggestionUINamespaceWithUndockedForType@NativeBridge@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@CAPE$AAVString@Platform@@PE$AAV67@@Z
    static ::Platform::String & * TryReplaceSuggestionUINamespaceWithUndockedForType(::Platform::String & *);
};
} // namespace WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked
