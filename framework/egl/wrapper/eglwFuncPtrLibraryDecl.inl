/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 *
 * Generated from Khronos EGL API description (egl.xml) revision 31042.
 */
EGLBoolean									bindAPI							(EGLenum api) const;
EGLBoolean									bindTexImage					(EGLDisplay dpy, EGLSurface surface, EGLint buffer) const;
EGLBoolean									chooseConfig					(EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config) const;
EGLint										clientWaitSync					(EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout) const;
EGLint										clientWaitSyncKHR				(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout) const;
EGLBoolean									copyBuffers						(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target) const;
EGLContext									createContext					(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list) const;
EGLImage									createImage						(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib *attrib_list) const;
EGLImageKHR									createImageKHR					(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint *attrib_list) const;
EGLSurface									createPbufferFromClientBuffer	(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list) const;
EGLSurface									createPbufferSurface			(EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list) const;
EGLSurface									createPixmapSurface				(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list) const;
EGLSurface									createPlatformPixmapSurface		(EGLDisplay dpy, EGLConfig config, void *native_pixmap, const EGLAttrib *attrib_list) const;
EGLSurface									createPlatformPixmapSurfaceEXT	(EGLDisplay dpy, EGLConfig config, void *native_pixmap, const EGLint *attrib_list) const;
EGLSurface									createPlatformWindowSurface		(EGLDisplay dpy, EGLConfig config, void *native_window, const EGLAttrib *attrib_list) const;
EGLSurface									createPlatformWindowSurfaceEXT	(EGLDisplay dpy, EGLConfig config, void *native_window, const EGLint *attrib_list) const;
EGLSync										createSync						(EGLDisplay dpy, EGLenum type, const EGLAttrib *attrib_list) const;
EGLSyncKHR									createSyncKHR					(EGLDisplay dpy, EGLenum type, const EGLint *attrib_list) const;
EGLSurface									createWindowSurface				(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list) const;
EGLBoolean									destroyContext					(EGLDisplay dpy, EGLContext ctx) const;
EGLBoolean									destroyImage					(EGLDisplay dpy, EGLImage image) const;
EGLBoolean									destroyImageKHR					(EGLDisplay dpy, EGLImageKHR image) const;
EGLBoolean									destroySurface					(EGLDisplay dpy, EGLSurface surface) const;
EGLBoolean									destroySync						(EGLDisplay dpy, EGLSync sync) const;
EGLBoolean									destroySyncKHR					(EGLDisplay dpy, EGLSyncKHR sync) const;
EGLBoolean									getConfigAttrib					(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value) const;
EGLBoolean									getConfigs						(EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config) const;
EGLContext									getCurrentContext				(void) const;
EGLDisplay									getCurrentDisplay				(void) const;
EGLSurface									getCurrentSurface				(EGLint readdraw) const;
EGLDisplay									getDisplay						(EGLNativeDisplayType display_id) const;
EGLint										getError						(void) const;
EGLDisplay									getPlatformDisplay				(EGLenum platform, void *native_display, const EGLAttrib *attrib_list) const;
EGLDisplay									getPlatformDisplayEXT			(EGLenum platform, void *native_display, const EGLint *attrib_list) const;
__eglMustCastToProperFunctionPointerType	getProcAddress					(const char *procname) const;
EGLBoolean									getSyncAttrib					(EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib *value) const;
EGLBoolean									getSyncAttribKHR				(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint *value) const;
EGLBoolean									initialize						(EGLDisplay dpy, EGLint *major, EGLint *minor) const;
EGLBoolean									lockSurfaceKHR					(EGLDisplay dpy, EGLSurface surface, const EGLint *attrib_list) const;
EGLBoolean									makeCurrent						(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx) const;
EGLenum										queryAPI						(void) const;
EGLBoolean									queryContext					(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value) const;
const char *								queryString						(EGLDisplay dpy, EGLint name) const;
EGLBoolean									querySurface					(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value) const;
EGLBoolean									releaseTexImage					(EGLDisplay dpy, EGLSurface surface, EGLint buffer) const;
EGLBoolean									releaseThread					(void) const;
EGLBoolean									setDamageRegionKHR				(EGLDisplay dpy, EGLSurface surface, EGLint *rects, EGLint n_rects) const;
EGLBoolean									signalSyncKHR					(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode) const;
EGLBoolean									surfaceAttrib					(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value) const;
EGLBoolean									swapBuffers						(EGLDisplay dpy, EGLSurface surface) const;
EGLBoolean									swapBuffersWithDamageKHR		(EGLDisplay dpy, EGLSurface surface, EGLint *rects, EGLint n_rects) const;
EGLBoolean									swapInterval					(EGLDisplay dpy, EGLint interval) const;
EGLBoolean									terminate						(EGLDisplay dpy) const;
EGLBoolean									unlockSurfaceKHR				(EGLDisplay dpy, EGLSurface surface) const;
EGLBoolean									waitClient						(void) const;
EGLBoolean									waitGL							(void) const;
EGLBoolean									waitNative						(EGLint engine) const;
EGLBoolean									waitSync						(EGLDisplay dpy, EGLSync sync, EGLint flags) const;
EGLint										waitSyncKHR						(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags) const;
