#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 14 member(s).
namespace winrt::impl {
class error_info_fallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@error_info_fallback@impl@winrt@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEA_W@Z
    virtual int GetDescription(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEA_WPEAH00@Z
    virtual int GetErrorDetails(wchar_t * *, int *, wchar_t * *, wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUID@error_info_fallback@impl@winrt@@UEAAHPEAUguid@3@@Z
    virtual int GetGUID(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpContext@error_info_fallback@impl@winrt@@UEAAHPEAI@Z
    virtual int GetHelpContext(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpFile@error_info_fallback@impl@winrt@@UEAAHPEAPEA_W@Z
    virtual int GetHelpFile(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReference@error_info_fallback@impl@winrt@@UEAAHPEAPEA_W@Z
    virtual int GetReference(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@error_info_fallback@impl@winrt@@UEAAHPEAPEA_W@Z
    virtual int GetSource(wchar_t * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@error_info_fallback@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z
    virtual int QueryInterface(WindissectOpaque const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@error_info_fallback@impl@winrt@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1error_info_fallback@impl@winrt@@QEAA@XZ
    ~error_info_fallback();
};
} // namespace winrt::impl
