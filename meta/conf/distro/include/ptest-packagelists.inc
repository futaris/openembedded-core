#
# Lists of the ptests in OE-Core, sorted into two sets by the time they take
#
# ptests which take less than ~30s each
#
PTESTS_FAST = "\
    acl-ptest \
    apr-ptest \
    apr-util-ptest \
    attr-ptest \
    bluez5-ptest \
    bzip2-ptest \
    diffstat-ptest \
    diffutils-ptest \
    elfutils-ptest \
    ethtool-ptest \
    flex-ptest \
    gawk-ptest \
    gdbm-ptest \
    gdk-pixbuf-ptest \
    gettext-ptest \
    gzip-ptest \
    json-glib-ptest \
    kbd-ptest \
    libconvert-asn1-perl-ptest \
    liberror-perl-ptest \
    libpcre-ptest \
    libtimedate-perl-ptest \
    libtest-needs-perl-ptest \
    liburi-perl-ptest \
    libusb1-ptest \
    libxml-namespacesupport-perl-ptest \
    libxml-perl-ptest \
    libxml-parser-perl-ptest \
    libxml-sax-perl-ptest \
    libxml-sax-base-perl-ptest \
    libxml-simple-perl-ptest \
    libxml2-ptest \
    lzo-ptest \
    m4-ptest \
    nettle-ptest \
    openssl-ptest \
    opkg-ptest \
    pango-ptest \
    parted-ptest \
    quilt-ptest \
    sed-ptest \
    slang-ptest \
    zlib-ptest \
"

#PTESTS_PROBLEMS = "\
#    qemu-ptest \ # Doesn't run any tests?
#    ruby-ptest \ # Timeout
#    mdadm-ptest \ # Timeout
#    clutter-1.0-ptest \ # Doesn't build due to depends on cogl-1.0
#"

PTESTS_SLOW = "\
    bash-ptest \
    busybox-ptest \
    dbus-test-ptest \
    e2fsprogs-ptest \
    glib-2.0-ptest \
    gstreamer1.0-ptest \
    libevent-ptest \
    lttng-tools-ptest \
    openssh-ptest \
    openssl-ptest \
    perl-ptest \
    python-ptest \
    python3-ptest \
    strace-ptest \
    tcl-ptest \
    util-linux-ptest \
    valgrind-ptest \
"
