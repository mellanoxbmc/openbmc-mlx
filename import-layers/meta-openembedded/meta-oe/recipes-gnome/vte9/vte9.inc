SUMMARY = "Virtual terminal emulator GTK+ widget library"
BUGTRACKER = "https://bugzilla.gnome.org/buglist.cgi?product=vte"
LICENSE = "LGPLv2.0"
DEPENDS = " glib-2.0 gtk+ intltool-native ncurses"
RDEPENDS_libvte = "vte-termcap"

# help gnomebase get the SRC_URI correct
GNOMEBN = "vte"
S = "${WORKDIR}/vte-${PV}"

inherit gnome gtk-doc distro_features_check upstream-version-is-even gobject-introspection
ANY_OF_DISTRO_FEATURES = "${GTK2DISTROFEATURES}"

EXTRA_OECONF = "--disable-python"

PACKAGES =+ "libvte9 vte9-termcap"
FILES_libvte9 = "${libdir}/*.so.* ${libexecdir}/gnome-pty-helper"
FILES_vte9-termcap = "${datadir}/vte/termcap-0.0"
