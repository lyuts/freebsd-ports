From 3dda85661515d71101f1028dc7d68d4e53de45b1 Mon Sep 17 00:00:00 2001
From: Kouhei Sutou <kou@clear-code.com>
Date: Fri, 25 Dec 2015 23:36:00 +0900
Subject: [PATCH] poppler: remove needless POPPLER_TYPE_ORIENTATION binding

Poppler 0.39 removed it. And there are no Poppler releases that use
POPPLER_TYPE_ORIENTATION.

GitHub: fix #653

Reported by Rob Brackett. Thanks!!!
---
 poppler/ext/poppler/rbpoppler.c | 1 -
 1 file changed, 1 deletion(-)

diff --git a/poppler/ext/poppler/rbpoppler.c b/poppler/ext/poppler/rbpoppler.c
index 2b28f95..fb3bfed 100644
--- ext/poppler/rbpoppler.c
+++ ext/poppler/rbpoppler.c
@@ -56,7 +56,6 @@ Init_poppler(void)
                                 INT2FIX(POPPLER_MICRO_VERSION)));
 
     G_DEF_CLASS(POPPLER_TYPE_ERROR, "Error", RG_TARGET_NAMESPACE);
-    G_DEF_CLASS(POPPLER_TYPE_ORIENTATION, "Orientation", RG_TARGET_NAMESPACE);
 
     G_DEF_CLASS(POPPLER_TYPE_PAGE_TRANSITION_TYPE,
                 "PageTransitionType", RG_TARGET_NAMESPACE);
