
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 72 > 0
static unsigned char *bytecode_data[72];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contourpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contourpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contourpy$chunk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contourpy$enum_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cycler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_gtktemplate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_option(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_ossighelper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_propertyhelper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_signalhelper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$importer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$module(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides$GLib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides$GObject(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides$Gdk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides$Gtk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$repository(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_identifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$async_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$bccache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$defaults(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$environment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$idtracking(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$lexer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$loaders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$nodes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$runtime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$tests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$visitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kiwisolver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_native(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_afm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_animation_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_blocking_input(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm_listed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_color_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_constrained_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_fontconfig_pattern(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_layoutgrid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_pylab_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_text_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_tight_bbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_tight_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$animation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$artist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_secondary_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_bases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$_backend_tk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_agg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_tkagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$bezier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colorbar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$container(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$contour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dviread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$figure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$font_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$gridspec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$hatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$layout_engine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend_handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$lines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$markers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mlab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$offsetbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$path(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patheffects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$geo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$pyplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$quiver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$rcsetup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$scale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$spines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$stackplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$streamplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$texmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$textpath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$ticker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_tricontour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_trifinder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_triinterpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_tripcolor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_triplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_trirefine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$_tritools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$art3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axes3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axis3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$proj3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$actions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$diagram(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$results(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$unicode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_test(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_threadpoolctl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/dylan/git/pyspectrogram/Spectrogram.py"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/dylan/git/pyspectrogram/Spectrogram.py"
#endif
},
    {"argparse", NULL, 0, 63106, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/argparse.py"
#endif
},
    {"asyncio", NULL, 1, 728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/__init__.py"
#endif
},
    {"asyncio.base_events", NULL, 2, 51836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/base_events.py"
#endif
},
    {"asyncio.base_futures", NULL, 3, 1895, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/base_futures.py"
#endif
},
    {"asyncio.base_subprocess", NULL, 4, 9370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/base_subprocess.py"
#endif
},
    {"asyncio.base_tasks", NULL, 5, 1965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/base_tasks.py"
#endif
},
    {"asyncio.constants", NULL, 6, 570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/constants.py"
#endif
},
    {"asyncio.coroutines", NULL, 7, 6605, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/coroutines.py"
#endif
},
    {"asyncio.events", NULL, 8, 28290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/events.py"
#endif
},
    {"asyncio.exceptions", NULL, 9, 2452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/exceptions.py"
#endif
},
    {"asyncio.format_helpers", NULL, 10, 2323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/format_helpers.py"
#endif
},
    {"asyncio.futures", NULL, 11, 11871, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/futures.py"
#endif
},
    {"asyncio.locks", NULL, 12, 14157, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/locks.py"
#endif
},
    {"asyncio.log", NULL, 13, 213, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/log.py"
#endif
},
    {"asyncio.mixins", NULL, 14, 1061, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/mixins.py"
#endif
},
    {"asyncio.protocols", NULL, 15, 8282, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/protocols.py"
#endif
},
    {"asyncio.queues", NULL, 16, 8284, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/queues.py"
#endif
},
    {"asyncio.runners", NULL, 17, 2076, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/runners.py"
#endif
},
    {"asyncio.selector_events", NULL, 18, 29562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/selector_events.py"
#endif
},
    {"asyncio.sslproto", NULL, 19, 21938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/sslproto.py"
#endif
},
    {"asyncio.staggered", NULL, 20, 4167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/staggered.py"
#endif
},
    {"asyncio.streams", NULL, 21, 20380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/streams.py"
#endif
},
    {"asyncio.subprocess", NULL, 22, 7046, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/subprocess.py"
#endif
},
    {"asyncio.tasks", NULL, 23, 23957, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/tasks.py"
#endif
},
    {"asyncio.threads", NULL, 24, 969, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/threads.py"
#endif
},
    {"asyncio.transports", NULL, 25, 12316, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/transports.py"
#endif
},
    {"asyncio.trsock", NULL, 26, 7826, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/trsock.py"
#endif
},
    {"asyncio.unix_events", NULL, 27, 41675, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/asyncio/unix_events.py"
#endif
},
    {"bdb", NULL, 28, 25806, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/bdb.py"
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/certifi/__init__.py"
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/certifi/core.py"
#endif
},
    {"concurrent", NULL, 29, 119, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/__init__.py"
#endif
},
    {"concurrent.futures", NULL, 30, 1091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/futures/__init__.py"
#endif
},
    {"concurrent.futures._base", NULL, 31, 22217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/futures/_base.py"
#endif
},
    {"concurrent.futures.process", NULL, 32, 21731, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/futures/process.py"
#endif
},
    {"concurrent.futures.thread", NULL, 33, 5949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/concurrent/futures/thread.py"
#endif
},
    {"contourpy", modulecode_contourpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/contourpy/__init__.py"
#endif
},
    {"contourpy._version", modulecode_contourpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/contourpy/_version.py"
#endif
},
    {"contourpy.chunk", modulecode_contourpy$chunk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/contourpy/chunk.py"
#endif
},
    {"contourpy.enum_util", modulecode_contourpy$enum_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/contourpy/enum_util.py"
#endif
},
    {"cycler", modulecode_cycler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/cycler.py"
#endif
},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/__init__.py"
#endif
},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/_common.py"
#endif
},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/_version.py"
#endif
},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/easter.py"
#endif
},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/parser/__init__.py"
#endif
},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/parser/_parser.py"
#endif
},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/parser/isoparser.py"
#endif
},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/relativedelta.py"
#endif
},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/rrule.py"
#endif
},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/tz/__init__.py"
#endif
},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/tz/_common.py"
#endif
},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/tz/_factories.py"
#endif
},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/tz/tz.py"
#endif
},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/tz/win.py"
#endif
},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/dateutil/zoneinfo/__init__.py"
#endif
},
    {"gi", modulecode_gi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/__init__.py"
#endif
},
    {"gi._constants", modulecode_gi$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/_constants.py"
#endif
},
    {"gi._error", modulecode_gi$_error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/_error.py"
#endif
},
    {"gi._gtktemplate", modulecode_gi$_gtktemplate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/_gtktemplate.py"
#endif
},
    {"gi._option", modulecode_gi$_option, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/_option.py"
#endif
},
    {"gi._ossighelper", modulecode_gi$_ossighelper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/_ossighelper.py"
#endif
},
    {"gi._propertyhelper", modulecode_gi$_propertyhelper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/_propertyhelper.py"
#endif
},
    {"gi._signalhelper", modulecode_gi$_signalhelper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/_signalhelper.py"
#endif
},
    {"gi.docstring", modulecode_gi$docstring, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/docstring.py"
#endif
},
    {"gi.importer", modulecode_gi$importer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/importer.py"
#endif
},
    {"gi.module", modulecode_gi$module, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/module.py"
#endif
},
    {"gi.overrides", modulecode_gi$overrides, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/overrides/__init__.py"
#endif
},
    {"gi.overrides.GLib", modulecode_gi$overrides$GLib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/overrides/GLib.py"
#endif
},
    {"gi.overrides.GObject", modulecode_gi$overrides$GObject, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/overrides/GObject.py"
#endif
},
    {"gi.overrides.Gdk", modulecode_gi$overrides$Gdk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/overrides/Gdk.py"
#endif
},
    {"gi.overrides.Gtk", modulecode_gi$overrides$Gtk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/overrides/Gtk.py"
#endif
},
    {"gi.repository", modulecode_gi$repository, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/repository/__init__.py"
#endif
},
    {"gi.types", modulecode_gi$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/gi/types.py"
#endif
},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/__init__.py"
#endif
},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/_identifier.py"
#endif
},
    {"jinja2.async_utils", modulecode_jinja2$async_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/async_utils.py"
#endif
},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/bccache.py"
#endif
},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/compiler.py"
#endif
},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/constants.py"
#endif
},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/debug.py"
#endif
},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/defaults.py"
#endif
},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/environment.py"
#endif
},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/exceptions.py"
#endif
},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/filters.py"
#endif
},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/idtracking.py"
#endif
},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/lexer.py"
#endif
},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/loaders.py"
#endif
},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/nodes.py"
#endif
},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/optimizer.py"
#endif
},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/parser.py"
#endif
},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/runtime.py"
#endif
},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/tests.py"
#endif
},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/utils.py"
#endif
},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/jinja2/visitor.py"
#endif
},
    {"kiwisolver", modulecode_kiwisolver, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/kiwisolver/__init__.py"
#endif
},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/markupsafe/__init__.py"
#endif
},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/markupsafe/_native.py"
#endif
},
    {"matplotlib", modulecode_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/__init__.py"
#endif
},
    {"matplotlib._afm", modulecode_matplotlib$_afm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_afm.py"
#endif
},
    {"matplotlib._animation_data", modulecode_matplotlib$_animation_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_animation_data.py"
#endif
},
    {"matplotlib._api", modulecode_matplotlib$_api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_api/__init__.py"
#endif
},
    {"matplotlib._api.deprecation", modulecode_matplotlib$_api$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_api/deprecation.py"
#endif
},
    {"matplotlib._blocking_input", modulecode_matplotlib$_blocking_input, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_blocking_input.py"
#endif
},
    {"matplotlib._cm", modulecode_matplotlib$_cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_cm.py"
#endif
},
    {"matplotlib._cm_listed", modulecode_matplotlib$_cm_listed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_cm_listed.py"
#endif
},
    {"matplotlib._color_data", modulecode_matplotlib$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_color_data.py"
#endif
},
    {"matplotlib._constrained_layout", modulecode_matplotlib$_constrained_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_constrained_layout.py"
#endif
},
    {"matplotlib._docstring", modulecode_matplotlib$_docstring, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_docstring.py"
#endif
},
    {"matplotlib._enums", modulecode_matplotlib$_enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_enums.py"
#endif
},
    {"matplotlib._fontconfig_pattern", modulecode_matplotlib$_fontconfig_pattern, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_fontconfig_pattern.py"
#endif
},
    {"matplotlib._layoutgrid", modulecode_matplotlib$_layoutgrid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_layoutgrid.py"
#endif
},
    {"matplotlib._mathtext", modulecode_matplotlib$_mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_mathtext.py"
#endif
},
    {"matplotlib._mathtext_data", modulecode_matplotlib$_mathtext_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_mathtext_data.py"
#endif
},
    {"matplotlib._pylab_helpers", modulecode_matplotlib$_pylab_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_pylab_helpers.py"
#endif
},
    {"matplotlib._text_helpers", modulecode_matplotlib$_text_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_text_helpers.py"
#endif
},
    {"matplotlib._tight_bbox", modulecode_matplotlib$_tight_bbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_tight_bbox.py"
#endif
},
    {"matplotlib._tight_layout", modulecode_matplotlib$_tight_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_tight_layout.py"
#endif
},
    {"matplotlib._version", modulecode_matplotlib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/_version.py"
#endif
},
    {"matplotlib.animation", modulecode_matplotlib$animation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/animation.py"
#endif
},
    {"matplotlib.artist", modulecode_matplotlib$artist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/artist.py"
#endif
},
    {"matplotlib.axes", modulecode_matplotlib$axes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/axes/__init__.py"
#endif
},
    {"matplotlib.axes._axes", modulecode_matplotlib$axes$_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/axes/_axes.py"
#endif
},
    {"matplotlib.axes._base", modulecode_matplotlib$axes$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/axes/_base.py"
#endif
},
    {"matplotlib.axes._secondary_axes", modulecode_matplotlib$axes$_secondary_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/axes/_secondary_axes.py"
#endif
},
    {"matplotlib.axis", modulecode_matplotlib$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/axis.py"
#endif
},
    {"matplotlib.backend_bases", modulecode_matplotlib$backend_bases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/backend_bases.py"
#endif
},
    {"matplotlib.backend_managers", modulecode_matplotlib$backend_managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/backend_managers.py"
#endif
},
    {"matplotlib.backend_tools", modulecode_matplotlib$backend_tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/backend_tools.py"
#endif
},
    {"matplotlib.backends", modulecode_matplotlib$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/backends/__init__.py"
#endif
},
    {"matplotlib.backends._backend_tk", modulecode_matplotlib$backends$_backend_tk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/backends/_backend_tk.py"
#endif
},
    {"matplotlib.backends.backend_agg", modulecode_matplotlib$backends$backend_agg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/backends/backend_agg.py"
#endif
},
    {"matplotlib.backends.backend_tkagg", modulecode_matplotlib$backends$backend_tkagg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/backends/backend_tkagg.py"
#endif
},
    {"matplotlib.bezier", modulecode_matplotlib$bezier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/bezier.py"
#endif
},
    {"matplotlib.category", modulecode_matplotlib$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/category.py"
#endif
},
    {"matplotlib.cbook", modulecode_matplotlib$cbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/cbook/__init__.py"
#endif
},
    {"matplotlib.cm", modulecode_matplotlib$cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/cm.py"
#endif
},
    {"matplotlib.collections", modulecode_matplotlib$collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/collections.py"
#endif
},
    {"matplotlib.colorbar", modulecode_matplotlib$colorbar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/colorbar.py"
#endif
},
    {"matplotlib.colors", modulecode_matplotlib$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/colors.py"
#endif
},
    {"matplotlib.container", modulecode_matplotlib$container, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/container.py"
#endif
},
    {"matplotlib.contour", modulecode_matplotlib$contour, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/contour.py"
#endif
},
    {"matplotlib.dates", modulecode_matplotlib$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/dates.py"
#endif
},
    {"matplotlib.dviread", modulecode_matplotlib$dviread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/dviread.py"
#endif
},
    {"matplotlib.figure", modulecode_matplotlib$figure, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/figure.py"
#endif
},
    {"matplotlib.font_manager", modulecode_matplotlib$font_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/font_manager.py"
#endif
},
    {"matplotlib.gridspec", modulecode_matplotlib$gridspec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/gridspec.py"
#endif
},
    {"matplotlib.hatch", modulecode_matplotlib$hatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/hatch.py"
#endif
},
    {"matplotlib.image", modulecode_matplotlib$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/image.py"
#endif
},
    {"matplotlib.layout_engine", modulecode_matplotlib$layout_engine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/layout_engine.py"
#endif
},
    {"matplotlib.legend", modulecode_matplotlib$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/legend.py"
#endif
},
    {"matplotlib.legend_handler", modulecode_matplotlib$legend_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/legend_handler.py"
#endif
},
    {"matplotlib.lines", modulecode_matplotlib$lines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/lines.py"
#endif
},
    {"matplotlib.markers", modulecode_matplotlib$markers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/markers.py"
#endif
},
    {"matplotlib.mathtext", modulecode_matplotlib$mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/mathtext.py"
#endif
},
    {"matplotlib.mlab", modulecode_matplotlib$mlab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/mlab.py"
#endif
},
    {"matplotlib.offsetbox", modulecode_matplotlib$offsetbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/offsetbox.py"
#endif
},
    {"matplotlib.patches", modulecode_matplotlib$patches, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/patches.py"
#endif
},
    {"matplotlib.path", modulecode_matplotlib$path, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/path.py"
#endif
},
    {"matplotlib.patheffects", modulecode_matplotlib$patheffects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/patheffects.py"
#endif
},
    {"matplotlib.projections", modulecode_matplotlib$projections, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/projections/__init__.py"
#endif
},
    {"matplotlib.projections.geo", modulecode_matplotlib$projections$geo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/projections/geo.py"
#endif
},
    {"matplotlib.projections.polar", modulecode_matplotlib$projections$polar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/projections/polar.py"
#endif
},
    {"matplotlib.pyplot", modulecode_matplotlib$pyplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/pyplot.py"
#endif
},
    {"matplotlib.quiver", modulecode_matplotlib$quiver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/quiver.py"
#endif
},
    {"matplotlib.rcsetup", modulecode_matplotlib$rcsetup, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/rcsetup.py"
#endif
},
    {"matplotlib.scale", modulecode_matplotlib$scale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/scale.py"
#endif
},
    {"matplotlib.spines", modulecode_matplotlib$spines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/spines.py"
#endif
},
    {"matplotlib.stackplot", modulecode_matplotlib$stackplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/stackplot.py"
#endif
},
    {"matplotlib.streamplot", modulecode_matplotlib$streamplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/streamplot.py"
#endif
},
    {"matplotlib.style", modulecode_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/style/__init__.py"
#endif
},
    {"matplotlib.style.core", modulecode_matplotlib$style$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/style/core.py"
#endif
},
    {"matplotlib.table", modulecode_matplotlib$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/table.py"
#endif
},
    {"matplotlib.texmanager", modulecode_matplotlib$texmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/texmanager.py"
#endif
},
    {"matplotlib.text", modulecode_matplotlib$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/text.py"
#endif
},
    {"matplotlib.textpath", modulecode_matplotlib$textpath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/textpath.py"
#endif
},
    {"matplotlib.ticker", modulecode_matplotlib$ticker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/ticker.py"
#endif
},
    {"matplotlib.transforms", modulecode_matplotlib$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/transforms.py"
#endif
},
    {"matplotlib.tri", modulecode_matplotlib$tri, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/tri/__init__.py"
#endif
},
    {"matplotlib.tri._triangulation", modulecode_matplotlib$tri$_triangulation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/tri/_triangulation.py"
#endif
},
    {"matplotlib.tri._tricontour", modulecode_matplotlib$tri$_tricontour, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/tri/_tricontour.py"
#endif
},
    {"matplotlib.tri._trifinder", modulecode_matplotlib$tri$_trifinder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/tri/_trifinder.py"
#endif
},
    {"matplotlib.tri._triinterpolate", modulecode_matplotlib$tri$_triinterpolate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/tri/_triinterpolate.py"
#endif
},
    {"matplotlib.tri._tripcolor", modulecode_matplotlib$tri$_tripcolor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/tri/_tripcolor.py"
#endif
},
    {"matplotlib.tri._triplot", modulecode_matplotlib$tri$_triplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/tri/_triplot.py"
#endif
},
    {"matplotlib.tri._trirefine", modulecode_matplotlib$tri$_trirefine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/tri/_trirefine.py"
#endif
},
    {"matplotlib.tri._tritools", modulecode_matplotlib$tri$_tritools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/tri/_tritools.py"
#endif
},
    {"matplotlib.units", modulecode_matplotlib$units, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/units.py"
#endif
},
    {"matplotlib.widgets", modulecode_matplotlib$widgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/matplotlib/widgets.py"
#endif
},
    {"mpl_toolkits", modulecode_mpl_toolkits, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/mpl_toolkits"
#endif
},
    {"mpl_toolkits.mplot3d", modulecode_mpl_toolkits$mplot3d, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/mpl_toolkits/mplot3d/__init__.py"
#endif
},
    {"mpl_toolkits.mplot3d.art3d", modulecode_mpl_toolkits$mplot3d$art3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/mpl_toolkits/mplot3d/art3d.py"
#endif
},
    {"mpl_toolkits.mplot3d.axes3d", modulecode_mpl_toolkits$mplot3d$axes3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/mpl_toolkits/mplot3d/axes3d.py"
#endif
},
    {"mpl_toolkits.mplot3d.axis3d", modulecode_mpl_toolkits$mplot3d$axis3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/mpl_toolkits/mplot3d/axis3d.py"
#endif
},
    {"mpl_toolkits.mplot3d.proj3d", modulecode_mpl_toolkits$mplot3d$proj3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/mpl_toolkits/mplot3d/proj3d.py"
#endif
},
    {"multiprocessing", NULL, 34, 653, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/__init__.py"
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/multiprocessing-postLoad.py"
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/multiprocessing-preLoad.py"
#endif
},
    {"multiprocessing.connection", NULL, 35, 25558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/connection.py"
#endif
},
    {"multiprocessing.context", NULL, 36, 12838, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/context.py"
#endif
},
    {"multiprocessing.dummy", NULL, 37, 3852, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/dummy/__init__.py"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 38, 2552, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/dummy/connection.py"
#endif
},
    {"multiprocessing.forkserver", NULL, 39, 8410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/forkserver.py"
#endif
},
    {"multiprocessing.heap", NULL, 40, 7652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/heap.py"
#endif
},
    {"multiprocessing.managers", NULL, 41, 40746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/managers.py"
#endif
},
    {"multiprocessing.pool", NULL, 42, 25186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/pool.py"
#endif
},
    {"multiprocessing.popen_fork", NULL, 43, 2505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/popen_fork.py"
#endif
},
    {"multiprocessing.popen_forkserver", NULL, 44, 2450, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/popen_forkserver.py"
#endif
},
    {"multiprocessing.popen_spawn_posix", NULL, 45, 2333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/popen_spawn_posix.py"
#endif
},
    {"multiprocessing.process", NULL, 46, 11246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/process.py"
#endif
},
    {"multiprocessing.queues", NULL, 47, 10269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/queues.py"
#endif
},
    {"multiprocessing.reduction", NULL, 48, 8281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/reduction.py"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 49, 5285, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/resource_sharer.py"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 50, 5506, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/resource_tracker.py"
#endif
},
    {"multiprocessing.shared_memory", NULL, 51, 14468, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/shared_memory.py"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 52, 7084, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/sharedctypes.py"
#endif
},
    {"multiprocessing.spawn", NULL, 53, 6721, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/spawn.py"
#endif
},
    {"multiprocessing.synchronize", NULL, 54, 11311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/synchronize.py"
#endif
},
    {"multiprocessing.util", NULL, 55, 11481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/multiprocessing/util.py"
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/__init__.py"
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/__config__.py"
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/_distributor_init.py"
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/_globals.py"
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/_pytesttester.py"
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/_version.py"
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/compat/__init__.py"
#endif
},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/compat/_inspect.py"
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/compat/py3k.py"
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/__init__.py"
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_add_newdocs.py"
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_add_newdocs_scalars.py"
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_asarray.py"
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_dtype.py"
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_dtype_ctypes.py"
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_exceptions.py"
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_internal.py"
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_machar.py"
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_methods.py"
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_string_helpers.py"
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_type_aliases.py"
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/_ufunc_config.py"
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/arrayprint.py"
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/defchararray.py"
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/einsumfunc.py"
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/fromnumeric.py"
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/function_base.py"
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/getlimits.py"
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/memmap.py"
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/multiarray.py"
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/numeric.py"
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/numerictypes.py"
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/overrides.py"
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/records.py"
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/shape_base.py"
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/core/umath.py"
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/ctypeslib.py"
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/fft/__init__.py"
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/fft/_pocketfft.py"
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/fft/helper.py"
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/__init__.py"
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/_datasource.py"
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/_iotools.py"
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/_version.py"
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/arraypad.py"
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/arraysetops.py"
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/arrayterator.py"
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/format.py"
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/function_base.py"
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/histograms.py"
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/index_tricks.py"
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/mixins.py"
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/nanfunctions.py"
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/npyio.py"
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/polynomial.py"
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/scimath.py"
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/shape_base.py"
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/stride_tricks.py"
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/twodim_base.py"
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/type_check.py"
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/ufunclike.py"
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/lib/utils.py"
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/linalg/__init__.py"
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/linalg/linalg.py"
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/ma/__init__.py"
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/ma/core.py"
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/ma/extras.py"
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/ma/mrecords.py"
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/matrixlib/__init__.py"
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/matrixlib/defmatrix.py"
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/polynomial/__init__.py"
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/polynomial/_polybase.py"
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/polynomial/chebyshev.py"
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/polynomial/hermite.py"
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/polynomial/hermite_e.py"
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/polynomial/laguerre.py"
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/polynomial/legendre.py"
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/polynomial/polynomial.py"
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/polynomial/polyutils.py"
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/random/__init__.py"
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/random/_pickle.py"
#endif
},
    {"numpy.testing", NULL, 56, 2198, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/testing/__init__.py"
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/numpy/version.py"
#endif
},
    {"optparse", NULL, 57, 47738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/optparse.py"
#endif
},
    {"packaging", NULL, 58, 467, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/packaging/__init__.py"
#endif
},
    {"packaging._structures", NULL, 59, 2644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/packaging/_structures.py"
#endif
},
    {"packaging.version", NULL, 60, 13878, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/packaging/version.py"
#endif
},
    {"pdb", NULL, 61, 47672, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/pdb.py"
#endif
},
    {"pyparsing", modulecode_pyparsing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/__init__.py"
#endif
},
    {"pyparsing.actions", modulecode_pyparsing$actions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/actions.py"
#endif
},
    {"pyparsing.common", modulecode_pyparsing$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/common.py"
#endif
},
    {"pyparsing.core", modulecode_pyparsing$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/core.py"
#endif
},
    {"pyparsing.diagram", modulecode_pyparsing$diagram, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/diagram/__init__.py"
#endif
},
    {"pyparsing.exceptions", modulecode_pyparsing$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/exceptions.py"
#endif
},
    {"pyparsing.helpers", modulecode_pyparsing$helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/helpers.py"
#endif
},
    {"pyparsing.results", modulecode_pyparsing$results, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/results.py"
#endif
},
    {"pyparsing.testing", modulecode_pyparsing$testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/testing.py"
#endif
},
    {"pyparsing.unicode", modulecode_pyparsing$unicode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/unicode.py"
#endif
},
    {"pyparsing.util", modulecode_pyparsing$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/pyparsing/util.py"
#endif
},
    {"runpy", NULL, 62, 9395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/runpy.py"
#endif
},
    {"site", NULL, 63, 17364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site.py"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/six.py"
#endif
},
    {"test", modulecode_test, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/test/__init__.py"
#endif
},
    {"threadpoolctl", modulecode_threadpoolctl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/site-packages/threadpoolctl.py"
#endif
},
    {"tkinter", NULL, 64, 169569, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/tkinter/__init__.py"
#endif
},
    {"tkinter.commondialog", NULL, 65, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/tkinter/commondialog.py"
#endif
},
    {"tkinter.constants", NULL, 66, 1641, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/tkinter/constants.py"
#endif
},
    {"tkinter.dialog", NULL, 67, 1492, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/tkinter/dialog.py"
#endif
},
    {"tkinter.filedialog", NULL, 68, 12437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/tkinter/filedialog.py"
#endif
},
    {"tkinter.font", NULL, 69, 6599, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/tkinter/font.py"
#endif
},
    {"tkinter.messagebox", NULL, 70, 2910, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/tkinter/messagebox.py"
#endif
},
    {"tkinter.simpledialog", NULL, 71, 10915, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.10/tkinter/simpledialog.py"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

