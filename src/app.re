[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./img/logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div className="App">
        <Header />
      <Tile title="First Item" />
      <Footer />
    </div>
};
