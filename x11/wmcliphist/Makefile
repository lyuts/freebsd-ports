# Created by: Patrick Li <pat@databits.net>
# $FreeBSD$

PORTNAME=	wmcliphist
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	x11 windowmaker
MASTER_SITES=	http://linux.nawebu.cz/wmcliphist/ \
		LOCAL/uqs

MAINTAINER=	uqs@FreeBSD.org
COMMENT=	Clipboard history management dockapp for Window Maker

SUB_FILES=	pkg-message
WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		gmake pkgconfig
USE_GNOME=	gtk20
USE_XORG=	x11

OPTIONS_DEFINE=	DOCS

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/wmcliphistrc ${STAGEDIR}${EXAMPLESDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
