#pragma once
#include "../windissect_forwards.h"

// Reconstructed from WindowsInternal.ComposableShell.Experiences.SuggestionUIUndocked.dll by Windissect. 5 member(s).
namespace winrt::impl {
class agile_ref_fallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@agile_ref_fallback@impl@winrt@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@agile_ref_fallback@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z
    virtual int QueryInterface(WindissectOpaque const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@agile_ref_fallback@impl@winrt@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@agile_ref_fallback@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z
    virtual int Resolve(WindissectOpaque const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1agile_ref_fallback@impl@winrt@@QEAA@XZ
    ~agile_ref_fallback();
};
} // namespace winrt::impl
