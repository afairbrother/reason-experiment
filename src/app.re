[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./img/logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = ( _children) => {
  ...component,
  render: (_self) =>
    <div className="App">
        <Header />
        <Tiles />
        <Footer />
    </div>
};
