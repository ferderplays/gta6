int gta6() {
    void loading() {
        int loading = true;
        pic1 = "";
        pic2 = "";
        pic3 = "";
        pic4 = "";
        switch (loading) {
            case pic1:
                this.display(pic1), true;
                break;
            case pic2:
                this.display(pic2), true;
                break;
            case pic3:
                this.display(pic3), true;
                break;
            case pic4:
                this.display(pic4), true;
                break;
        }
    }
    void movement() {
        int key = this.pressed();
        switch (key) {
            case W:
                this.game.player.move.forward(), true;
                break;
            case S:
                this.game.player.move.backward(), true;
                break;
            case D:
                this.game.player.move.right(), true;
                break;
            case A:
                this.game.player.move.left(), true;
                break;
            case RMB:
                this.game.player.hand.RightHand.move.forward(), true;
                this.game.player.hand.RightHand.move.backward().withDelay(100), true;
                break;
            case LMB:
                this.game.player.hand.LeftHand.move.forward(), true;
                this.game.player.hand.LeftHand.move.backward().withDelay(100), true;
                break;
        }
    }
    void hit() {
        int hitcc = this.game.player.hand.hitCharacter();
        switch (hitcc) {
            case CHLOE:
                this.game.sendTitle("You finnally did it, great job!");
                break;
        }
    }
}