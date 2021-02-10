#ifndef MRTCOREEX_WIL_ERRORS_H
#define MRTCOREEX_WIL_ERRORS_H

#define RETURN_HR_IF_NULL(hr, what) do { if (what == nullptr) return hr; } while (0)
#define RETURN_IF_FAILED(expr) do { HRESULT hr = (expr); if (hr < 0) return hr; } while (0)
#define RETURN_HR_IF(hr, expr) do { if (!(expr)) return hr; } while (0)
#define RETURN_IF_NULL(what) RETURN_HR_IF_NULL(E_FAIL, what)
#define RETURN_IF_NULL_ALLOC(what) RETURN_HR_IF_NULL(E_OUTOFMEMORY, what)

#endif /* MRTCOREEX_WIL_ERRORS_H */
