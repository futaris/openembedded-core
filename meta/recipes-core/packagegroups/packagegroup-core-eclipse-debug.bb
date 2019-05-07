SUMMARY = "Remote debugging tools for Eclipse integration"

inherit packagegroup

RDEPENDS_${PN} = "\
    gdbserver \
    openssh-sftp-server \
    "
