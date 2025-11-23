# Pedantix Auto-Player – Mots communs français

Ce dépôt contient un script permettant de jouer automatiquement à Pedantix en testant successivement tous les mots communs de la langue française.
L’objectif : automatiser les essais pour s’approcher le plus rapidement possible du mot cible.

## ⚠️ Attention : important à lire avant utilisation
Le script n’a pas encore de mécanisme d’arrêt propre.
Il est donc vivement recommandé de l’exécuter uniquement depuis un IDE (VS Code, PyCharm, etc.) afin de pouvoir l’interrompre manuellement à tout moment (Stop/Interrupt).
Une gestion d’arrêt propre sera ajoutée dans une future version.

## ✨ Fonctionnalités

Charge une liste de mots communs français (fréquents, courants, sans noms propres).

Envoie automatiquement les essais à Pedantix dans l’ordre prévu.

Permet d’observer la progression des indices au fur et à mesure.

Architecture simple, facile à modifier ou étendre.

## 🚧 Prochaines évolutions

Ajout des noms propres (villes, pays, prénoms…)
→ Cette fonctionnalité est en cours d’implémentation pour améliorer la couverture du vocabulaire.

Ajout d’un système d’arrêt propre (interruption clavier, watchdog, worker dédié…)

Optimisation de l’ordre des essais (par fréquence, par distance lexicale…).

Interface plus ergonomique (CLI interactive ou mini GUI).