/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 *
 * Generated from Khronos EGL API description (egl.xml) revision 33216.
 */
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglBindAPIFunc)							(EGLenum api);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglBindTexImageFunc)					(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglChooseConfigFunc)					(EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config);
typedef EGLW_APICALL EGLint										(EGLW_APIENTRY* eglClientWaitSyncFunc)					(EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout);
typedef EGLW_APICALL EGLint										(EGLW_APIENTRY* eglClientWaitSyncKHRFunc)				(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglCopyBuffersFunc)						(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
typedef EGLW_APICALL EGLContext									(EGLW_APIENTRY* eglCreateContextFunc)					(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list);
typedef EGLW_APICALL EGLImage									(EGLW_APIENTRY* eglCreateImageFunc)						(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib *attrib_list);
typedef EGLW_APICALL EGLImageKHR								(EGLW_APIENTRY* eglCreateImageKHRFunc)					(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint *attrib_list);
typedef EGLW_APICALL EGLSurface									(EGLW_APIENTRY* eglCreatePbufferFromClientBufferFunc)	(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list);
typedef EGLW_APICALL EGLSurface									(EGLW_APIENTRY* eglCreatePbufferSurfaceFunc)			(EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list);
typedef EGLW_APICALL EGLSurface									(EGLW_APIENTRY* eglCreatePixmapSurfaceFunc)				(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list);
typedef EGLW_APICALL EGLSurface									(EGLW_APIENTRY* eglCreatePlatformPixmapSurfaceFunc)		(EGLDisplay dpy, EGLConfig config, void *native_pixmap, const EGLAttrib *attrib_list);
typedef EGLW_APICALL EGLSurface									(EGLW_APIENTRY* eglCreatePlatformPixmapSurfaceEXTFunc)	(EGLDisplay dpy, EGLConfig config, void *native_pixmap, const EGLint *attrib_list);
typedef EGLW_APICALL EGLSurface									(EGLW_APIENTRY* eglCreatePlatformWindowSurfaceFunc)		(EGLDisplay dpy, EGLConfig config, void *native_window, const EGLAttrib *attrib_list);
typedef EGLW_APICALL EGLSurface									(EGLW_APIENTRY* eglCreatePlatformWindowSurfaceEXTFunc)	(EGLDisplay dpy, EGLConfig config, void *native_window, const EGLint *attrib_list);
typedef EGLW_APICALL EGLSync									(EGLW_APIENTRY* eglCreateSyncFunc)						(EGLDisplay dpy, EGLenum type, const EGLAttrib *attrib_list);
typedef EGLW_APICALL EGLSyncKHR									(EGLW_APIENTRY* eglCreateSyncKHRFunc)					(EGLDisplay dpy, EGLenum type, const EGLint *attrib_list);
typedef EGLW_APICALL EGLSurface									(EGLW_APIENTRY* eglCreateWindowSurfaceFunc)				(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglDestroyContextFunc)					(EGLDisplay dpy, EGLContext ctx);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglDestroyImageFunc)					(EGLDisplay dpy, EGLImage image);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglDestroyImageKHRFunc)					(EGLDisplay dpy, EGLImageKHR image);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglDestroySurfaceFunc)					(EGLDisplay dpy, EGLSurface surface);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglDestroySyncFunc)						(EGLDisplay dpy, EGLSync sync);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglDestroySyncKHRFunc)					(EGLDisplay dpy, EGLSyncKHR sync);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglGetConfigAttribFunc)					(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglGetConfigsFunc)						(EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config);
typedef EGLW_APICALL EGLContext									(EGLW_APIENTRY* eglGetCurrentContextFunc)				(void);
typedef EGLW_APICALL EGLDisplay									(EGLW_APIENTRY* eglGetCurrentDisplayFunc)				(void);
typedef EGLW_APICALL EGLSurface									(EGLW_APIENTRY* eglGetCurrentSurfaceFunc)				(EGLint readdraw);
typedef EGLW_APICALL EGLDisplay									(EGLW_APIENTRY* eglGetDisplayFunc)						(EGLNativeDisplayType display_id);
typedef EGLW_APICALL EGLint										(EGLW_APIENTRY* eglGetErrorFunc)						(void);
typedef EGLW_APICALL EGLDisplay									(EGLW_APIENTRY* eglGetPlatformDisplayFunc)				(EGLenum platform, void *native_display, const EGLAttrib *attrib_list);
typedef EGLW_APICALL EGLDisplay									(EGLW_APIENTRY* eglGetPlatformDisplayEXTFunc)			(EGLenum platform, void *native_display, const EGLint *attrib_list);
typedef EGLW_APICALL __eglMustCastToProperFunctionPointerType	(EGLW_APIENTRY* eglGetProcAddressFunc)					(const char *procname);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglGetSyncAttribFunc)					(EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib *value);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglGetSyncAttribKHRFunc)				(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint *value);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglInitializeFunc)						(EGLDisplay dpy, EGLint *major, EGLint *minor);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglLockSurfaceKHRFunc)					(EGLDisplay dpy, EGLSurface surface, const EGLint *attrib_list);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglMakeCurrentFunc)						(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
typedef EGLW_APICALL EGLenum									(EGLW_APIENTRY* eglQueryAPIFunc)						(void);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglQueryContextFunc)					(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value);
typedef EGLW_APICALL const char *								(EGLW_APIENTRY* eglQueryStringFunc)						(EGLDisplay dpy, EGLint name);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglQuerySurfaceFunc)					(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglReleaseTexImageFunc)					(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglReleaseThreadFunc)					(void);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglSetDamageRegionKHRFunc)				(EGLDisplay dpy, EGLSurface surface, EGLint *rects, EGLint n_rects);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglSignalSyncKHRFunc)					(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglSurfaceAttribFunc)					(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglSwapBuffersFunc)						(EGLDisplay dpy, EGLSurface surface);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglSwapBuffersWithDamageKHRFunc)		(EGLDisplay dpy, EGLSurface surface, EGLint *rects, EGLint n_rects);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglSwapIntervalFunc)					(EGLDisplay dpy, EGLint interval);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglTerminateFunc)						(EGLDisplay dpy);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglUnlockSurfaceKHRFunc)				(EGLDisplay dpy, EGLSurface surface);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglWaitClientFunc)						(void);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglWaitGLFunc)							(void);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglWaitNativeFunc)						(EGLint engine);
typedef EGLW_APICALL EGLBoolean									(EGLW_APIENTRY* eglWaitSyncFunc)						(EGLDisplay dpy, EGLSync sync, EGLint flags);
typedef EGLW_APICALL EGLint										(EGLW_APIENTRY* eglWaitSyncKHRFunc)						(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);
