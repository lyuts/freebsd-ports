# $FreeBSD$

PORTNAME=	kipi-plugins
PORTVERSION=	${DIGIKAM_VER}
PORTEPOCH=	1
CATEGORIES=	graphics kde
DISTFILES=	#

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 kipi graphics plugins (meta port)

NO_BUILD=	yes
NO_INSTALL=	yes
NO_MTREE=	yes

.include "${.CURDIR}/../digikam-kde4/Makefile.common"

OPTIONS_DEFINE=		DOCS NLS
OPTIONS_DEFAULT=	${OPTIONS_DEFINE}

# DOCS ans NLS options first, then plugins sorted in KIPI_PLUGINS_ALL
NO_OPTIONS_SORT=	yes

.for plugin in ${KIPI_PLUGINS_ALL}
OPTIONS_DEFINE+=	${plugin:tu}
${plugin:tu}_DESC=	${${plugin}_DESC}
${plugin:tu}_RUN_DEPENDS=	kipi-plugin-${plugin}>=${DIGIKAM_VER}:graphics/kipi-plugin-${plugin}
.endfor

NLS_DEP=	digikam-l10n>=${DIGIKAM_VER}:graphics/digikam-kde4-l10n
DOCS_DEP=	digikam-doc>=${DIGIKAM_VER}:graphics/digikam-kde4-doc

.include <bsd.port.mk>
