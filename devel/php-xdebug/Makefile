# Created by: Jens Rehsack <rehsack@liwing.de>
# $FreeBSD$

PORTNAME=	xdebug
PORTVERSION=	2.2.5
CATEGORIES=	devel
MASTER_SITES=	http://www.xdebug.org/files/
PKGNAMEPREFIX=	php-

MAINTAINER=	freebsd-ports-maintainers@intermedix.com
COMMENT=	Xdebug extension for PHP

LICENSE=	PHP30

CONFIGURE_ARGS=	--enable-xdebug
USE_PHP=	yes
USE_PHPIZE=	yes
USE_ZENDEXT=	yes
USES=		tar:tgz

SUB_FILES=	pkg-message

IGNORE_WITH_PHP=	70

.include <bsd.port.mk>
